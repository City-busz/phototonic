#include <QtWidgets>

class ShortcutsTable : public QTableView {
    Q_OBJECT

public:
    ShortcutsTable();

    void addRow(QString action, QString description, QString shortcut);

    void refreshShortcuts();

public slots:
    void setFilter(QString filter);

    void showShortcutPopupMenu(QPoint point);

    void clearSelectedShortcut();

protected:
    void keyPressEvent(QKeyEvent *keyEvent);

private:
    QStandardItemModel *keysModel;
    QModelIndex selectedEntry;
    QMenu *shortcutsMenu;
    QAction *clearAction;

    QString shortcutsFilter;
};

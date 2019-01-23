#include "test_9.h"

test_9::test_9(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.btnsave, SIGNAL(clicked()), this, SLOT(onsave()));
}
int test_9::onsave()
{
	QString text=ui.textlocation->text();
	bool autolog=ui.login->isChecked();
	return 0;
}
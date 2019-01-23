#include "test_10B.h"

test_10B::test_10B(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowTitle(QString::fromLocal8Bit("文件管理器"));
}

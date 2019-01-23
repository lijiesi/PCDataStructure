#include "MyWidget.h"
#include <QPainter>
MyWidget::MyWidget(QWidget *parent)
	: QFrame(parent)
{
}

MyWidget::~MyWidget()
{
	

}
int MyWidget::simple()
{
	QPainter painter(this);
	int width = this->width();
	int height = this->height();
	painter.setPen(QPen(QColor(0xff, 0x00, 0x00)));

	QFont font("Times", 16, QFont::Bold, true);
	painter.setFont(font);
	//һ���text��simple()
// 	QString text = QString::fromLocal8Bit("����й�");
// 	painter.drawText(0, 0, width, height, Qt::AlignHCenter | Qt::AlignVCenter, text);



	//�������õ�text��wrap()
// 	QString text = QString::fromLocal8Bit("�й���½�����Լ960��ƽ��ǧ�ף��������ϲ���½������1.8���ǧ��");
// 	QRect rec(0, 0, width, height);
// 	QTextOption option;
// 	option.setWrapMode(QTextOption::WrapAnywhere);
// 	painter.drawText(rec,text,option);
	return 0;
}

int MyWidget::dynamic()
{
	QPainter painter(this);
	int width = this->width();
	int height = this->height();
	QFont font("Times", 16, QFont::Normal, false);
	painter.setFont(font);
	QString text = QString::fromLocal8Bit("�й���½�����Լ960��ƽ��ǧ�ף��������ϲ���½������1.8���ǧ��");
	QFontMetrics metric(font);
	QRect boundingRect = metric.boundingRect(0, 0, width, height, Qt::AlignHCenter | Qt::AlignVCenter, text);
	if (boundingRect.width()<=width)
	{
		painter.drawText(0, 0, width, height, Qt::AlignHCenter | Qt::AlignVCenter,text);
	}
	else
	{
		for (int i = text.length() - 1; i >= 0; i--)
		{
			QString substr = text.left(i);
			QString showtext = substr + "...";
			QRect boundingRect = metric.boundingRect(0, 0, width, height, Qt::AlignHCenter | Qt::AlignVCenter, showtext);
			if (boundingRect.width() < width)
			{
				painter.drawText(0, 0, width, height, Qt::AlignHCenter | Qt::AlignVCenter, showtext);
				break;
			}
		}
	}
	return 0;
}
void MyWidget::paintEvent(QPaintEvent *event)
{
	//simple();
	dynamic();
}

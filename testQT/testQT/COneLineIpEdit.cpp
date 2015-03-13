#include "COneLineIpEdit.h"
#include <QPainter>
#include <QPen>
#include <QRegExp>
#include <QValidator>
COneIPLineEdit::COneIPLineEdit(QWidget *parent)
:QLineEdit(parent)
{
	setAlignment(Qt::AlignHCenter);
	setMaxLength(3);
	setMinimumSize(25, 20);
	QRegExp rx("(2[0-5]{2}|2[0-4][0-9]|1?[0-9]{1,2})");
	setValidator(new QRegExpValidator(rx, this));
	connect(this, SIGNAL(textChanged(QString)), this, SLOT(SlotTextChanged()));
}
COneIPLineEdit::~COneIPLineEdit()
{
}
//void COneIPLineEdit::SlotPreFinished()
//{
//
//}
//
//void COneIPLineEdit::SlotTextChanged()
//{
//  if (text().length() == 3)
//  {
//
//  }
//}
/*******************************************************************************************/
CIPLineEdit::CIPLineEdit(QWidget *parent)
: QLineEdit(parent)
{

}
CIPLineEdit::~CIPLineEdit()
{
}
void CIPLineEdit::paintEvent(QPaintEvent *e)
{
	QLineEdit::paintEvent(e);

	int nWidth = width() - 5;//3���㣬��ͷ�߿��һ������
	int nAverageWidth = nWidth / 4;
	int nPointY = height() / 2;
	int nTrans = 0;
	//������4�����ϵ㡢����֮������2��3�Ŀ��࣬����߿�������������ʾ
	if (nWidth - nAverageWidth * 4 - 5 >= 2)
	{
		nTrans = 1;
	}
	QPainter painter(this);
	painter.setPen(QPen(Qt::black));
	painter.save();
	for (int i = 0; i < 3; i++)
	{
		painter.drawPoint(nAverageWidth*(i + 1) + i + 1 + nTrans, nPointY);
	}
	painter.restore();
}
void CIPLineEdit::setGeometry(int x, int y, int w, int h)
{
	QLineEdit::setGeometry(x, y, w, h);
	int nWidth = w - 5;//3���㣬��ͷ�߿��һ������
	int nAverageWidth = nWidth / 4;
	int nAverageHeight = h - 2;
	int nTrans = 0;
	//������4�����ϵ㡢����֮������2��3�Ŀ��࣬����߿�������������ʾ
	if (nWidth - nAverageWidth * 4 - 5 >= 2)
	{
		nTrans = 1;
	}
	for (int i = 0; i < 4; i++)
	{
		m_pLineEdit[i] = new COneIPLineEdit(this);
		m_pLineEdit[i]->setFrame(false);
		m_pLineEdit[i]->setGeometry(nAverageWidth*i + i + 1, 1, nAverageWidth, nAverageHeight);
	}
}
bool CIPLineEdit::SetIPText(int nIP, int nIndex)
{
	if (nIndex < 0 || nIndex > 3)
	{
		return false;
	}
	m_pLineEdit[nIndex]->setText(QString(nIP));
	return true;
}
int CIPLineEdit::GetIPText(int nIndex)
{
	if (nIndex < 0 || nIndex > 3)
	{
		return -1;
	}
	return m_pLineEdit[nIndex]->text().toInt();
}
//void CIPLineEdit::setGeometryInLayerout(QLineEdit *a){
//	int nWidth = this->geometry->width;
//	int nAverageHeight = this->geometry->height - 2;
////	int nWidth = a->geometry.width - 5;//3���㣬��ͷ�߿��һ������
//	int nAverageWidth = nWidth / 4;
////	int nAverageHeight = a->geometry.height - 2;
//	int nTrans = 0;
//	//������4�����ϵ㡢����֮������2��3�Ŀ��࣬����߿�������������ʾ
//	if (nWidth - nAverageWidth * 4 - 5 >= 2)
//	{
//		nTrans = 1;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		m_pLineEdit[i] = new COneIPLineEdit(this);
//		m_pLineEdit[i]->setFrame(false);
//		m_pLineEdit[i]->setGeometry(nAverageWidth*i + i + 1, 1, nAverageWidth, nAverageHeight);
//	}
//}
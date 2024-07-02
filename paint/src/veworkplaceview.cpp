#include "veworkplaceview.h"

VEWorkplaceView::VEWorkplaceView(QWidget *parent) : QGraphicsView(parent)
{

}

void VEWorkplaceView::mouseReleaseEvent(QMouseEvent *event)
{
    QGraphicsView::mouseReleaseEvent(event);
    viewport()->setCursor(Qt::CrossCursor);
}

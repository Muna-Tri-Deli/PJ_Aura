// Copyright MUNA152


#include "UI/widget/AuraUserWidget.h"

void UAuraUserWidget::SetWidgetController(UObject* IWidgetController)
{
	WidgetController = IWidgetController;
	WidgetControllerSet();
}


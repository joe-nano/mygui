/*!
	@file
	@author		Albert Semenov
	@date		12/2007
	@module
*/
#include "MyGUI_StaticText.h"

namespace MyGUI
{

	MYGUI_RTTI_CHILD_IMPLEMENT( StaticText, Widget );

	StaticText::StaticText(const IntCoord& _coord, Align _align, const WidgetSkinInfoPtr _info, ICroppedRectangle * _parent, IWidgetCreator * _creator, const Ogre::String & _name) :
		Widget(_coord, _align, _info, _parent, _creator, _name)
	{
		initialiseWidgetSkin(_info);
	}

	StaticText::~StaticText()
	{
		shutdownWidgetSkin();
	}

	void StaticText::baseChangeWidgetSkin(WidgetSkinInfoPtr _info)
	{
		shutdownWidgetSkin();
		Widget::baseChangeWidgetSkin(_info);
		initialiseWidgetSkin(_info);
	}

	void StaticText::initialiseWidgetSkin(WidgetSkinInfoPtr _info)
	{
	}

	void StaticText::shutdownWidgetSkin()
	{
	}

} // namespace MyGUI

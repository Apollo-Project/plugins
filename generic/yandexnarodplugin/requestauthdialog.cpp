/*
    requestAuthDialog

    Copyright (c) 2008-2009 by Alexander Kazarin <boiler@co.ru>
		  2011 by Evgeny Khryukin

 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************
*/

#include "requestauthdialog.h"
#include "proxy.h"

requestAuthDialog::requestAuthDialog(QWidget *parent) : QDialog(parent)
{
	ui.setupUi(this);
	ui.frameCaptcha->hide();
	this->setFixedHeight(180);
	this->setMaximumHeight(180);
	if(ProxyManager::instance()->useProxy())
		ui.webCaptcha->page()->networkAccessManager()->setProxy(ProxyManager::instance()->getProxy());
}


requestAuthDialog::~requestAuthDialog()
{
	
}

void requestAuthDialog::setCaptcha(QString imgurl)
{
	this->setFixedHeight(305);
	this->setMaximumHeight(305);
	ui.frameCaptcha->show();
	ui.webCaptcha->setHtml("<img src='"+imgurl+"'>");
	ui.labelCaptcha->show();
}

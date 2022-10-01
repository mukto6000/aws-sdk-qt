// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "workspaceswebresponse.h"
#include "workspaceswebresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::WorkSpacesWebResponse
 * \brief The WorkSpacesWebResponse class provides an interface for WorkSpacesWeb responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a WorkSpacesWebResponse object with parent \a parent.
 */
WorkSpacesWebResponse::WorkSpacesWebResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new WorkSpacesWebResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a WorkSpacesWebResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WorkSpacesWebResponsePrivate.
 */
WorkSpacesWebResponse::WorkSpacesWebResponse(WorkSpacesWebResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void WorkSpacesWebResponse::parseFailure(QIODevice &response)
{
    //Q_D(WorkSpacesWebResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::WorkSpacesWeb::WorkSpacesWebResponsePrivate
 * \brief The WorkSpacesWebResponsePrivate class provides private implementation for WorkSpacesWebResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a WorkSpacesWebResponsePrivate object with public implementation \a q.
 */
WorkSpacesWebResponsePrivate::WorkSpacesWebResponsePrivate(
    WorkSpacesWebResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws

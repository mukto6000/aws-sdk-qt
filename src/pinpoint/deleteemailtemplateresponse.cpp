/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteemailtemplateresponse.h"
#include "deleteemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteEmailTemplateResponse
 * \brief The DeleteEmailTemplateResponse class provides an interace for Pinpoint DeleteEmailTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteEmailTemplate
 */

/*!
 * Constructs a DeleteEmailTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEmailTemplateResponse::DeleteEmailTemplateResponse(
        const DeleteEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteEmailTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEmailTemplateRequest * DeleteEmailTemplateResponse::request() const
{
    return static_cast<const DeleteEmailTemplateRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteEmailTemplate \a response.
 */
void DeleteEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteEmailTemplateResponsePrivate
 * \brief The DeleteEmailTemplateResponsePrivate class provides private implementation for DeleteEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteEmailTemplateResponsePrivate object with public implementation \a q.
 */
DeleteEmailTemplateResponsePrivate::DeleteEmailTemplateResponsePrivate(
    DeleteEmailTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteEmailTemplate response element from \a xml.
 */
void DeleteEmailTemplateResponsePrivate::parseDeleteEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEmailTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

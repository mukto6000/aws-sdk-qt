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

#include "updatetriggerresponse.h"
#include "updatetriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateTriggerResponse
 * \brief The UpdateTriggerResponse class provides an interace for Glue UpdateTrigger responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateTrigger
 */

/*!
 * Constructs a UpdateTriggerResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTriggerResponse::UpdateTriggerResponse(
        const UpdateTriggerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateTriggerResponsePrivate(this), parent)
{
    setRequest(new UpdateTriggerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTriggerRequest * UpdateTriggerResponse::request() const
{
    return static_cast<const UpdateTriggerRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue UpdateTrigger \a response.
 */
void UpdateTriggerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTriggerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateTriggerResponsePrivate
 * \brief The UpdateTriggerResponsePrivate class provides private implementation for UpdateTriggerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateTriggerResponsePrivate object with public implementation \a q.
 */
UpdateTriggerResponsePrivate::UpdateTriggerResponsePrivate(
    UpdateTriggerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateTrigger response element from \a xml.
 */
void UpdateTriggerResponsePrivate::parseUpdateTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTriggerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws

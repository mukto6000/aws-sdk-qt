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

#include "stopfleetresponse.h"
#include "stopfleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::StopFleetResponse
 * \brief The StopFleetResponse class provides an interace for AppStream StopFleet responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  This is the <i>Amazon AppStream 2.0 API Reference</i>. This documentation provides descriptions and syntax for each of
 *  the actions and data types in AppStream 2.0. AppStream 2.0 is a fully managed, secure application streaming service that
 *  lets you stream desktop applications to users without rewriting applications. AppStream 2.0 manages the AWS resources
 *  that are required to host and run your applications, scales automatically, and provides access to your users on demand.
 * 
 *  </p <note>
 * 
 *  You can call the AppStream 2.0 API operations by using an interface VPC endpoint (interface endpoint). For more
 *  information, see <a
 *  href="https://docs.aws.amazon.com/appstream2/latest/developerguide/access-api-cli-through-interface-vpc-endpoint.html">Access
 *  AppStream 2.0 API Operations and CLI Commands Through an Interface VPC Endpoint</a> in the <i>Amazon AppStream 2.0
 *  Administration
 * 
 *  Guide</i>> </note>
 * 
 *  To learn more about AppStream 2.0, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/appstream2">Amazon AppStream 2.0 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/appstream2">Amazon AppStream 2.0 documentation</a>
 *
 * \sa AppStreamClient::stopFleet
 */

/*!
 * Constructs a StopFleetResponse object for \a reply to \a request, with parent \a parent.
 */
StopFleetResponse::StopFleetResponse(
        const StopFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new StopFleetResponsePrivate(this), parent)
{
    setRequest(new StopFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopFleetRequest * StopFleetResponse::request() const
{
    return static_cast<const StopFleetRequest *>(AppStreamResponse::request());
}

/*!
 * \reimp
 * Parses a successful AppStream StopFleet \a response.
 */
void StopFleetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::StopFleetResponsePrivate
 * \brief The StopFleetResponsePrivate class provides private implementation for StopFleetResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a StopFleetResponsePrivate object with public implementation \a q.
 */
StopFleetResponsePrivate::StopFleetResponsePrivate(
    StopFleetResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream StopFleet response element from \a xml.
 */
void StopFleetResponsePrivate::parseStopFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopFleetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws

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

#include "listtagsforresourceresponse.h"
#include "listtagsforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::ListTagsForResourceResponse
 * \brief The ListTagsForResourceResponse class provides an interace for IoTSecureTunneling ListTagsForResource responses.
 *
 * \inmodule QtAwsIoTSecureTunneling
 *
 *  <fullname>AWS IoT Secure Tunneling</fullname>
 * 
 *  AWS IoT Secure Tunnling enables you to create remote connections to devices deployed in the
 * 
 *  field>
 * 
 *  For more information about how AWS IoT Secure Tunneling works, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/secure-tunneling.html">AWS IoT Secure
 *
 * \sa IoTSecureTunnelingClient::listTagsForResource
 */

/*!
 * Constructs a ListTagsForResourceResponse object for \a reply to \a request, with parent \a parent.
 */
ListTagsForResourceResponse::ListTagsForResourceResponse(
        const ListTagsForResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSecureTunnelingResponse(new ListTagsForResourceResponsePrivate(this), parent)
{
    setRequest(new ListTagsForResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTagsForResourceRequest * ListTagsForResourceResponse::request() const
{
    return static_cast<const ListTagsForResourceRequest *>(IoTSecureTunnelingResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTSecureTunneling ListTagsForResource \a response.
 */
void ListTagsForResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTagsForResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSecureTunneling::ListTagsForResourceResponsePrivate
 * \brief The ListTagsForResourceResponsePrivate class provides private implementation for ListTagsForResourceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a ListTagsForResourceResponsePrivate object with public implementation \a q.
 */
ListTagsForResourceResponsePrivate::ListTagsForResourceResponsePrivate(
    ListTagsForResourceResponse * const q) : IoTSecureTunnelingResponsePrivate(q)
{

}

/*!
 * Parses a IoTSecureTunneling ListTagsForResource response element from \a xml.
 */
void ListTagsForResourceResponsePrivate::parseListTagsForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSecureTunneling
} // namespace QtAws

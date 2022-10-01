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

#include "listgroupresourcesresponse.h"
#include "listgroupresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::ListGroupResourcesResponse
 * \brief The ListGroupResourcesResponse class provides an interace for Synthetics ListGroupResources responses.
 *
 * \inmodule QtAwsSynthetics
 *
 *  <fullname>Amazon CloudWatch Synthetics</fullname>
 * 
 *  You can use Amazon CloudWatch Synthetics to continually monitor your services. You can create and manage
 *  <i>canaries</i>, which are modular, lightweight scripts that monitor your endpoints and APIs from the outside-in. You
 *  can set up your canaries to run 24 hours a day, once per minute. The canaries help you check the availability and
 *  latency of your web services and troubleshoot anomalies by investigating load time data, screenshots of the UI, logs,
 *  and metrics. The canaries seamlessly integrate with CloudWatch ServiceLens to help you trace the causes of impacted
 *  nodes in your applications. For more information, see <a
 *  href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ServiceLens.html">Using ServiceLens to Monitor the
 *  Health of Your Applications</a> in the <i>Amazon CloudWatch User
 * 
 *  Guide</i>>
 * 
 *  Before you create and manage canaries, be aware of the security considerations. For more information, see <a
 *  href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
 *  Considerations for Synthetics
 *
 * \sa SyntheticsClient::listGroupResources
 */

/*!
 * Constructs a ListGroupResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListGroupResourcesResponse::ListGroupResourcesResponse(
        const ListGroupResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SyntheticsResponse(new ListGroupResourcesResponsePrivate(this), parent)
{
    setRequest(new ListGroupResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGroupResourcesRequest * ListGroupResourcesResponse::request() const
{
    Q_D(const ListGroupResourcesResponse);
    return static_cast<const ListGroupResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Synthetics ListGroupResources \a response.
 */
void ListGroupResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGroupResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Synthetics::ListGroupResourcesResponsePrivate
 * \brief The ListGroupResourcesResponsePrivate class provides private implementation for ListGroupResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a ListGroupResourcesResponsePrivate object with public implementation \a q.
 */
ListGroupResourcesResponsePrivate::ListGroupResourcesResponsePrivate(
    ListGroupResourcesResponse * const q) : SyntheticsResponsePrivate(q)
{

}

/*!
 * Parses a Synthetics ListGroupResources response element from \a xml.
 */
void ListGroupResourcesResponsePrivate::parseListGroupResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Synthetics
} // namespace QtAws

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

#include "describeconfigurationresponse.h"
#include "describeconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::DescribeConfigurationResponse
 * \brief The DescribeConfigurationResponse class provides an interace for Mq DescribeConfiguration responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::describeConfiguration
 */

/*!
 * Constructs a DescribeConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeConfigurationResponse::DescribeConfigurationResponse(
        const DescribeConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new DescribeConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeConfigurationRequest * DescribeConfigurationResponse::request() const
{
    Q_D(const DescribeConfigurationResponse);
    return static_cast<const DescribeConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mq DescribeConfiguration \a response.
 */
void DescribeConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::DescribeConfigurationResponsePrivate
 * \brief The DescribeConfigurationResponsePrivate class provides private implementation for DescribeConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a DescribeConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeConfigurationResponsePrivate::DescribeConfigurationResponsePrivate(
    DescribeConfigurationResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq DescribeConfiguration response element from \a xml.
 */
void DescribeConfigurationResponsePrivate::parseDescribeConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws

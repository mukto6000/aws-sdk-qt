// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconfigurationrevisionresponse.h"
#include "describeconfigurationrevisionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::DescribeConfigurationRevisionResponse
 * \brief The DescribeConfigurationRevisionResponse class provides an interace for Mq DescribeConfigurationRevision responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::describeConfigurationRevision
 */

/*!
 * Constructs a DescribeConfigurationRevisionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeConfigurationRevisionResponse::DescribeConfigurationRevisionResponse(
        const DescribeConfigurationRevisionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new DescribeConfigurationRevisionResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigurationRevisionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeConfigurationRevisionRequest * DescribeConfigurationRevisionResponse::request() const
{
    Q_D(const DescribeConfigurationRevisionResponse);
    return static_cast<const DescribeConfigurationRevisionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mq DescribeConfigurationRevision \a response.
 */
void DescribeConfigurationRevisionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeConfigurationRevisionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::DescribeConfigurationRevisionResponsePrivate
 * \brief The DescribeConfigurationRevisionResponsePrivate class provides private implementation for DescribeConfigurationRevisionResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a DescribeConfigurationRevisionResponsePrivate object with public implementation \a q.
 */
DescribeConfigurationRevisionResponsePrivate::DescribeConfigurationRevisionResponsePrivate(
    DescribeConfigurationRevisionResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq DescribeConfigurationRevision response element from \a xml.
 */
void DescribeConfigurationRevisionResponsePrivate::parseDescribeConfigurationRevisionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationRevisionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws

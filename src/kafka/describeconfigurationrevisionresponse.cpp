// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconfigurationrevisionresponse.h"
#include "describeconfigurationrevisionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::DescribeConfigurationRevisionResponse
 * \brief The DescribeConfigurationRevisionResponse class provides an interace for Kafka DescribeConfigurationRevision responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::describeConfigurationRevision
 */

/*!
 * Constructs a DescribeConfigurationRevisionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeConfigurationRevisionResponse::DescribeConfigurationRevisionResponse(
        const DescribeConfigurationRevisionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new DescribeConfigurationRevisionResponsePrivate(this), parent)
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
 * Parses a successful Kafka DescribeConfigurationRevision \a response.
 */
void DescribeConfigurationRevisionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeConfigurationRevisionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::DescribeConfigurationRevisionResponsePrivate
 * \brief The DescribeConfigurationRevisionResponsePrivate class provides private implementation for DescribeConfigurationRevisionResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a DescribeConfigurationRevisionResponsePrivate object with public implementation \a q.
 */
DescribeConfigurationRevisionResponsePrivate::DescribeConfigurationRevisionResponsePrivate(
    DescribeConfigurationRevisionResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka DescribeConfigurationRevision response element from \a xml.
 */
void DescribeConfigurationRevisionResponsePrivate::parseDescribeConfigurationRevisionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationRevisionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconfigurationrevisionsresponse.h"
#include "listconfigurationrevisionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::ListConfigurationRevisionsResponse
 * \brief The ListConfigurationRevisionsResponse class provides an interace for Mq ListConfigurationRevisions responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::listConfigurationRevisions
 */

/*!
 * Constructs a ListConfigurationRevisionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListConfigurationRevisionsResponse::ListConfigurationRevisionsResponse(
        const ListConfigurationRevisionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new ListConfigurationRevisionsResponsePrivate(this), parent)
{
    setRequest(new ListConfigurationRevisionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConfigurationRevisionsRequest * ListConfigurationRevisionsResponse::request() const
{
    Q_D(const ListConfigurationRevisionsResponse);
    return static_cast<const ListConfigurationRevisionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mq ListConfigurationRevisions \a response.
 */
void ListConfigurationRevisionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConfigurationRevisionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::ListConfigurationRevisionsResponsePrivate
 * \brief The ListConfigurationRevisionsResponsePrivate class provides private implementation for ListConfigurationRevisionsResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a ListConfigurationRevisionsResponsePrivate object with public implementation \a q.
 */
ListConfigurationRevisionsResponsePrivate::ListConfigurationRevisionsResponsePrivate(
    ListConfigurationRevisionsResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq ListConfigurationRevisions response element from \a xml.
 */
void ListConfigurationRevisionsResponsePrivate::parseListConfigurationRevisionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConfigurationRevisionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws

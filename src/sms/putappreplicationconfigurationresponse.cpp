// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putappreplicationconfigurationresponse.h"
#include "putappreplicationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::PutAppReplicationConfigurationResponse
 * \brief The PutAppReplicationConfigurationResponse class provides an interace for Sms PutAppReplicationConfiguration responses.
 *
 * \inmodule QtAwsSms
 *
 *  <b>
 * 
 *  <b>Product update</b>
 * 
 *  </p
 * 
 *  We recommend <a href="http://aws.amazon.com/application-migration-service">Amazon Web Services Application Migration
 *  Service</a> (Amazon Web Services MGN) as the primary migration service for lift-and-shift migrations. If Amazon Web
 *  Services MGN is unavailable in a specific Amazon Web Services Region, you can use the Server Migration Service APIs
 *  through March
 * 
 *  2023> </b>
 * 
 *  Server Migration Service (Server Migration Service) makes it easier and faster for you to migrate your on-premises
 *  workloads to Amazon Web Services. To learn more about Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">Server Migration Service User Guide</a>
 *
 * \sa SmsClient::putAppReplicationConfiguration
 */

/*!
 * Constructs a PutAppReplicationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutAppReplicationConfigurationResponse::PutAppReplicationConfigurationResponse(
        const PutAppReplicationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new PutAppReplicationConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutAppReplicationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAppReplicationConfigurationRequest * PutAppReplicationConfigurationResponse::request() const
{
    Q_D(const PutAppReplicationConfigurationResponse);
    return static_cast<const PutAppReplicationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms PutAppReplicationConfiguration \a response.
 */
void PutAppReplicationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAppReplicationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::PutAppReplicationConfigurationResponsePrivate
 * \brief The PutAppReplicationConfigurationResponsePrivate class provides private implementation for PutAppReplicationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a PutAppReplicationConfigurationResponsePrivate object with public implementation \a q.
 */
PutAppReplicationConfigurationResponsePrivate::PutAppReplicationConfigurationResponsePrivate(
    PutAppReplicationConfigurationResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms PutAppReplicationConfiguration response element from \a xml.
 */
void PutAppReplicationConfigurationResponsePrivate::parsePutAppReplicationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAppReplicationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws

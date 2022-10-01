// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconnectorsresponse.h"
#include "getconnectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::GetConnectorsResponse
 * \brief The GetConnectorsResponse class provides an interace for Sms GetConnectors responses.
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
 * \sa SmsClient::getConnectors
 */

/*!
 * Constructs a GetConnectorsResponse object for \a reply to \a request, with parent \a parent.
 */
GetConnectorsResponse::GetConnectorsResponse(
        const GetConnectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new GetConnectorsResponsePrivate(this), parent)
{
    setRequest(new GetConnectorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConnectorsRequest * GetConnectorsResponse::request() const
{
    Q_D(const GetConnectorsResponse);
    return static_cast<const GetConnectorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms GetConnectors \a response.
 */
void GetConnectorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConnectorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::GetConnectorsResponsePrivate
 * \brief The GetConnectorsResponsePrivate class provides private implementation for GetConnectorsResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a GetConnectorsResponsePrivate object with public implementation \a q.
 */
GetConnectorsResponsePrivate::GetConnectorsResponsePrivate(
    GetConnectorsResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms GetConnectors response element from \a xml.
 */
void GetConnectorsResponsePrivate::parseGetConnectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws

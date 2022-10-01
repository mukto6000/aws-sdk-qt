// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gethealthcheckcountresponse.h"
#include "gethealthcheckcountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHealthCheckCountResponse
 * \brief The GetHealthCheckCountResponse class provides an interace for Route53 GetHealthCheckCount responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getHealthCheckCount
 */

/*!
 * Constructs a GetHealthCheckCountResponse object for \a reply to \a request, with parent \a parent.
 */
GetHealthCheckCountResponse::GetHealthCheckCountResponse(
        const GetHealthCheckCountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHealthCheckCountResponsePrivate(this), parent)
{
    setRequest(new GetHealthCheckCountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetHealthCheckCountRequest * GetHealthCheckCountResponse::request() const
{
    Q_D(const GetHealthCheckCountResponse);
    return static_cast<const GetHealthCheckCountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetHealthCheckCount \a response.
 */
void GetHealthCheckCountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetHealthCheckCountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetHealthCheckCountResponsePrivate
 * \brief The GetHealthCheckCountResponsePrivate class provides private implementation for GetHealthCheckCountResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHealthCheckCountResponsePrivate object with public implementation \a q.
 */
GetHealthCheckCountResponsePrivate::GetHealthCheckCountResponsePrivate(
    GetHealthCheckCountResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetHealthCheckCount response element from \a xml.
 */
void GetHealthCheckCountResponsePrivate::parseGetHealthCheckCountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHealthCheckCountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws

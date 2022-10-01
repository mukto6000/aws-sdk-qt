// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getloadbalancersresponse.h"
#include "getloadbalancersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetLoadBalancersResponse
 * \brief The GetLoadBalancersResponse class provides an interace for Lightsail GetLoadBalancers responses.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with Amazon Web Services (Amazon Web Services) for developers who
 *  need to build websites or web applications. It includes everything you need to launch your project quickly - instances
 *  (virtual private servers), container services, storage buckets, managed databases, SSD-based block storage, static IP
 *  addresses, load balancers, content delivery network (CDN) distributions, DNS management of registered domains, and
 *  resource snapshots (backups) - for a low, predictable monthly
 * 
 *  price>
 * 
 *  You can manage your Lightsail resources using the Lightsail console, Lightsail API, AWS Command Line Interface (AWS
 *  CLI), or SDKs. For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Amazon
 *  Lightsail Developer
 * 
 *  Guide</a>>
 * 
 *  This API Reference provides detailed information about the actions, data types, parameters, and errors of the Lightsail
 *  service. For more information about the supported Amazon Web Services Regions, endpoints, and service quotas of the
 *  Lightsail service, see <a href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon Lightsail Endpoints
 *  and Quotas</a> in the <i>Amazon Web Services General
 *
 * \sa LightsailClient::getLoadBalancers
 */

/*!
 * Constructs a GetLoadBalancersResponse object for \a reply to \a request, with parent \a parent.
 */
GetLoadBalancersResponse::GetLoadBalancersResponse(
        const GetLoadBalancersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetLoadBalancersResponsePrivate(this), parent)
{
    setRequest(new GetLoadBalancersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLoadBalancersRequest * GetLoadBalancersResponse::request() const
{
    Q_D(const GetLoadBalancersResponse);
    return static_cast<const GetLoadBalancersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail GetLoadBalancers \a response.
 */
void GetLoadBalancersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLoadBalancersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::GetLoadBalancersResponsePrivate
 * \brief The GetLoadBalancersResponsePrivate class provides private implementation for GetLoadBalancersResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a GetLoadBalancersResponsePrivate object with public implementation \a q.
 */
GetLoadBalancersResponsePrivate::GetLoadBalancersResponsePrivate(
    GetLoadBalancersResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail GetLoadBalancers response element from \a xml.
 */
void GetLoadBalancersResponsePrivate::parseGetLoadBalancersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLoadBalancersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putinstancepublicportsresponse.h"
#include "putinstancepublicportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::PutInstancePublicPortsResponse
 * \brief The PutInstancePublicPortsResponse class provides an interace for Lightsail PutInstancePublicPorts responses.
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
 * \sa LightsailClient::putInstancePublicPorts
 */

/*!
 * Constructs a PutInstancePublicPortsResponse object for \a reply to \a request, with parent \a parent.
 */
PutInstancePublicPortsResponse::PutInstancePublicPortsResponse(
        const PutInstancePublicPortsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new PutInstancePublicPortsResponsePrivate(this), parent)
{
    setRequest(new PutInstancePublicPortsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutInstancePublicPortsRequest * PutInstancePublicPortsResponse::request() const
{
    Q_D(const PutInstancePublicPortsResponse);
    return static_cast<const PutInstancePublicPortsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail PutInstancePublicPorts \a response.
 */
void PutInstancePublicPortsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutInstancePublicPortsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::PutInstancePublicPortsResponsePrivate
 * \brief The PutInstancePublicPortsResponsePrivate class provides private implementation for PutInstancePublicPortsResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a PutInstancePublicPortsResponsePrivate object with public implementation \a q.
 */
PutInstancePublicPortsResponsePrivate::PutInstancePublicPortsResponsePrivate(
    PutInstancePublicPortsResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail PutInstancePublicPorts response element from \a xml.
 */
void PutInstancePublicPortsResponsePrivate::parsePutInstancePublicPortsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutInstancePublicPortsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws

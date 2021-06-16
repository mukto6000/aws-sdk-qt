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

#include "getdomainsresponse.h"
#include "getdomainsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetDomainsResponse
 * \brief The GetDomainsResponse class provides an interace for Lightsail GetDomains responses.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with AWS for developers who just need virtual private servers.
 *  Lightsail includes everything you need to launch your project quickly - a virtual machine, a managed database, SSD-based
 *  storage, data transfer, DNS management, and a static IP - for a low, predictable price. You manage those Lightsail
 *  servers through the Lightsail console or by using the API or command-line interface
 * 
 *  (CLI)>
 * 
 *  For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/all">Lightsail Dev
 * 
 *  Guide</a>>
 * 
 *  To use the Lightsail API or the CLI, you will need to use AWS Identity and Access Management (IAM) to generate access
 *  keys. For details about how to set this up, see the <a
 *  href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
 *  Dev
 *
 * \sa LightsailClient::getDomains
 */

/*!
 * Constructs a GetDomainsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDomainsResponse::GetDomainsResponse(
        const GetDomainsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetDomainsResponsePrivate(this), parent)
{
    setRequest(new GetDomainsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDomainsRequest * GetDomainsResponse::request() const
{
    Q_D(const GetDomainsResponse);
    return static_cast<const GetDomainsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail GetDomains \a response.
 */
void GetDomainsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDomainsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::GetDomainsResponsePrivate
 * \brief The GetDomainsResponsePrivate class provides private implementation for GetDomainsResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a GetDomainsResponsePrivate object with public implementation \a q.
 */
GetDomainsResponsePrivate::GetDomainsResponsePrivate(
    GetDomainsResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail GetDomains response element from \a xml.
 */
void GetDomainsResponsePrivate::parseGetDomainsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws

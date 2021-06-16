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

#include "createcontactmethodresponse.h"
#include "createcontactmethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::CreateContactMethodResponse
 * \brief The CreateContactMethodResponse class provides an interace for Lightsail CreateContactMethod responses.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with Amazon Web Services (AWS) for developers who need to build
 *  websites or web applications. It includes everything you need to launch your project quickly - instances (virtual
 *  private servers), container services, managed databases, SSD-based block storage, static IP addresses, load balancers,
 *  content delivery network (CDN) distributions, DNS management of registered domains, and resource snapshots (backups) -
 *  for a low, predictable monthly
 * 
 *  price>
 * 
 *  You can manage your Lightsail resources using the Lightsail console, Lightsail API, AWS Command Line Interface (AWS
 *  CLI), or SDKs. For more information about Lightsail concepts and tasks, see the <a
 *  href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
 *  Dev
 * 
 *  Guide</a>>
 * 
 *  This API Reference provides detailed information about the actions, data types, parameters, and errors of the Lightsail
 *  service. For more information about the supported AWS Regions, endpoints, and service quotas of the Lightsail service,
 *  see <a href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon Lightsail Endpoints and Quotas</a> in
 *  the <i>AWS General
 *
 * \sa LightsailClient::createContactMethod
 */

/*!
 * Constructs a CreateContactMethodResponse object for \a reply to \a request, with parent \a parent.
 */
CreateContactMethodResponse::CreateContactMethodResponse(
        const CreateContactMethodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new CreateContactMethodResponsePrivate(this), parent)
{
    setRequest(new CreateContactMethodRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateContactMethodRequest * CreateContactMethodResponse::request() const
{
    Q_D(const CreateContactMethodResponse);
    return static_cast<const CreateContactMethodRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail CreateContactMethod \a response.
 */
void CreateContactMethodResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateContactMethodResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::CreateContactMethodResponsePrivate
 * \brief The CreateContactMethodResponsePrivate class provides private implementation for CreateContactMethodResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a CreateContactMethodResponsePrivate object with public implementation \a q.
 */
CreateContactMethodResponsePrivate::CreateContactMethodResponsePrivate(
    CreateContactMethodResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail CreateContactMethod response element from \a xml.
 */
void CreateContactMethodResponsePrivate::parseCreateContactMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateContactMethodResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws

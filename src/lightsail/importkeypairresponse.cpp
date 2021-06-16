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

#include "importkeypairresponse.h"
#include "importkeypairresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::ImportKeyPairResponse
 * \brief The ImportKeyPairResponse class provides an interace for Lightsail ImportKeyPair responses.
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
 * \sa LightsailClient::importKeyPair
 */

/*!
 * Constructs a ImportKeyPairResponse object for \a reply to \a request, with parent \a parent.
 */
ImportKeyPairResponse::ImportKeyPairResponse(
        const ImportKeyPairRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new ImportKeyPairResponsePrivate(this), parent)
{
    setRequest(new ImportKeyPairRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportKeyPairRequest * ImportKeyPairResponse::request() const
{
    Q_D(const ImportKeyPairResponse);
    return static_cast<const ImportKeyPairRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail ImportKeyPair \a response.
 */
void ImportKeyPairResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportKeyPairResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::ImportKeyPairResponsePrivate
 * \brief The ImportKeyPairResponsePrivate class provides private implementation for ImportKeyPairResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a ImportKeyPairResponsePrivate object with public implementation \a q.
 */
ImportKeyPairResponsePrivate::ImportKeyPairResponsePrivate(
    ImportKeyPairResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail ImportKeyPair response element from \a xml.
 */
void ImportKeyPairResponsePrivate::parseImportKeyPairResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportKeyPairResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws

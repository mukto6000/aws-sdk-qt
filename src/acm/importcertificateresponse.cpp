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

#include "importcertificateresponse.h"
#include "importcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::ImportCertificateResponse
 * \brief The ImportCertificateResponse class provides an interace for ACM ImportCertificate responses.
 *
 * \inmodule QtAwsACM
 *
 *  <fullname>AWS Certificate Manager</fullname>
 * 
 *  You can use AWS Certificate Manager (ACM) to manage SSL/TLS certificates for your AWS-based websites and applications.
 *  For more information about using ACM, see the <a href="https://docs.aws.amazon.com/acm/latest/userguide/">AWS
 *  Certificate Manager User
 *
 * \sa AcmClient::importCertificate
 */

/*!
 * Constructs a ImportCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
ImportCertificateResponse::ImportCertificateResponse(
        const ImportCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new ImportCertificateResponsePrivate(this), parent)
{
    setRequest(new ImportCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportCertificateRequest * ImportCertificateResponse::request() const
{
    return static_cast<const ImportCertificateRequest *>(AcmResponse::request());
}

/*!
 * \reimp
 * Parses a successful ACM ImportCertificate \a response.
 */
void ImportCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ACM::ImportCertificateResponsePrivate
 * \brief The ImportCertificateResponsePrivate class provides private implementation for ImportCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a ImportCertificateResponsePrivate object with public implementation \a q.
 */
ImportCertificateResponsePrivate::ImportCertificateResponsePrivate(
    ImportCertificateResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a ACM ImportCertificate response element from \a xml.
 */
void ImportCertificateResponsePrivate::parseImportCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ACM
} // namespace QtAws

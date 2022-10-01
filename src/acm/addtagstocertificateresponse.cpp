// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addtagstocertificateresponse.h"
#include "addtagstocertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::AddTagsToCertificateResponse
 * \brief The AddTagsToCertificateResponse class provides an interace for Acm AddTagsToCertificate responses.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::addTagsToCertificate
 */

/*!
 * Constructs a AddTagsToCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
AddTagsToCertificateResponse::AddTagsToCertificateResponse(
        const AddTagsToCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new AddTagsToCertificateResponsePrivate(this), parent)
{
    setRequest(new AddTagsToCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddTagsToCertificateRequest * AddTagsToCertificateResponse::request() const
{
    Q_D(const AddTagsToCertificateResponse);
    return static_cast<const AddTagsToCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Acm AddTagsToCertificate \a response.
 */
void AddTagsToCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddTagsToCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Acm::AddTagsToCertificateResponsePrivate
 * \brief The AddTagsToCertificateResponsePrivate class provides private implementation for AddTagsToCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a AddTagsToCertificateResponsePrivate object with public implementation \a q.
 */
AddTagsToCertificateResponsePrivate::AddTagsToCertificateResponsePrivate(
    AddTagsToCertificateResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a Acm AddTagsToCertificate response element from \a xml.
 */
void AddTagsToCertificateResponsePrivate::parseAddTagsToCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddTagsToCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Acm
} // namespace QtAws

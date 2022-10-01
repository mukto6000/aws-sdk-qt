// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsigningprofilesresponse.h"
#include "listsigningprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Signer {

/*!
 * \class QtAws::Signer::ListSigningProfilesResponse
 * \brief The ListSigningProfilesResponse class provides an interace for Signer ListSigningProfiles responses.
 *
 * \inmodule QtAwsSigner
 *
 *  AWS Signer is a fully managed code signing service to help you ensure the trust and integrity of your code.
 * 
 *  </p
 * 
 *  AWS Signer supports the following
 * 
 *  applications>
 * 
 *  With <i>code signing for AWS Lambda</i>, you can sign AWS Lambda deployment packages. Integrated support is provided for
 *  Amazon S3, Amazon CloudWatch, and AWS CloudTrail. In order to sign code, you create a signing profile and then use
 *  Signer to sign Lambda zip files in S3.
 * 
 *  </p
 * 
 *  With <i>code signing for IoT</i>, you can sign code for any IoT device that is supported by AWS. IoT code signing is
 *  available for <a href="http://docs.aws.amazon.com/freertos/latest/userguide/">Amazon FreeRTOS</a> and <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/">AWS IoT Device Management</a>, and is integrated with <a
 *  href="http://docs.aws.amazon.com/acm/latest/userguide/">AWS Certificate Manager (ACM)</a>. In order to sign code, you
 *  import a third-party code signing certificate using ACM, and use that to sign updates in Amazon FreeRTOS and AWS IoT
 *  Device Management.
 * 
 *  </p
 * 
 *  For more information about AWS Signer, see the <a
 *  href="http://docs.aws.amazon.com/signer/latest/developerguide/Welcome.html">AWS Signer Developer
 * 
 *  Guide</a>>
 *
 * \sa SignerClient::listSigningProfiles
 */

/*!
 * Constructs a ListSigningProfilesResponse object for \a reply to \a request, with parent \a parent.
 */
ListSigningProfilesResponse::ListSigningProfilesResponse(
        const ListSigningProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SignerResponse(new ListSigningProfilesResponsePrivate(this), parent)
{
    setRequest(new ListSigningProfilesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSigningProfilesRequest * ListSigningProfilesResponse::request() const
{
    Q_D(const ListSigningProfilesResponse);
    return static_cast<const ListSigningProfilesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Signer ListSigningProfiles \a response.
 */
void ListSigningProfilesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSigningProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Signer::ListSigningProfilesResponsePrivate
 * \brief The ListSigningProfilesResponsePrivate class provides private implementation for ListSigningProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsSigner
 */

/*!
 * Constructs a ListSigningProfilesResponsePrivate object with public implementation \a q.
 */
ListSigningProfilesResponsePrivate::ListSigningProfilesResponsePrivate(
    ListSigningProfilesResponse * const q) : SignerResponsePrivate(q)
{

}

/*!
 * Parses a Signer ListSigningProfiles response element from \a xml.
 */
void ListSigningProfilesResponsePrivate::parseListSigningProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSigningProfilesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Signer
} // namespace QtAws

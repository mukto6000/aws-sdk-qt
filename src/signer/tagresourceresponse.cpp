// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourceresponse.h"
#include "tagresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Signer {

/*!
 * \class QtAws::Signer::TagResourceResponse
 * \brief The TagResourceResponse class provides an interace for Signer TagResource responses.
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
 * \sa SignerClient::tagResource
 */

/*!
 * Constructs a TagResourceResponse object for \a reply to \a request, with parent \a parent.
 */
TagResourceResponse::TagResourceResponse(
        const TagResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SignerResponse(new TagResourceResponsePrivate(this), parent)
{
    setRequest(new TagResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TagResourceRequest * TagResourceResponse::request() const
{
    Q_D(const TagResourceResponse);
    return static_cast<const TagResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Signer TagResource \a response.
 */
void TagResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Signer::TagResourceResponsePrivate
 * \brief The TagResourceResponsePrivate class provides private implementation for TagResourceResponse.
 * \internal
 *
 * \inmodule QtAwsSigner
 */

/*!
 * Constructs a TagResourceResponsePrivate object with public implementation \a q.
 */
TagResourceResponsePrivate::TagResourceResponsePrivate(
    TagResourceResponse * const q) : SignerResponsePrivate(q)
{

}

/*!
 * Parses a Signer TagResource response element from \a xml.
 */
void TagResourceResponsePrivate::parseTagResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Signer
} // namespace QtAws

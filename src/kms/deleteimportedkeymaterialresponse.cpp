// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteimportedkeymaterialresponse.h"
#include "deleteimportedkeymaterialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kms {

/*!
 * \class QtAws::Kms::DeleteImportedKeyMaterialResponse
 * \brief The DeleteImportedKeyMaterialResponse class provides an interace for Kms DeleteImportedKeyMaterial responses.
 *
 * \inmodule QtAwsKms
 *
 *  <fullname>Key Management Service</fullname>
 * 
 *  Key Management Service (KMS) is an encryption and key management web service. This guide describes the KMS operations
 *  that you can call programmatically. For general information about KMS, see the <a
 *  href="https://docs.aws.amazon.com/kms/latest/developerguide/"> <i>Key Management Service Developer Guide</i>
 * 
 *  </a>> <note>
 * 
 *  KMS is replacing the term <i>customer master key (CMK)</i> with <i>KMS key</i> and <i>KMS key</i>. The concept has not
 *  changed. To prevent breaking changes, KMS is keeping some variations of this
 * 
 *  term>
 * 
 *  Amazon Web Services provides SDKs that consist of libraries and sample code for various programming languages and
 *  platforms (Java, Ruby, .Net, macOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to
 *  KMS and other Amazon Web Services services. For example, the SDKs take care of tasks such as signing requests (see
 *  below), managing errors, and retrying requests automatically. For more information about the Amazon Web Services SDKs,
 *  including how to download and install them, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>> </note>
 * 
 *  We recommend that you use the Amazon Web Services SDKs to make programmatic API calls to KMS.
 * 
 *  </p
 * 
 *  If you need to use FIPS 140-2 validated cryptographic modules when communicating with Amazon Web Services, use the FIPS
 *  endpoint in your preferred Amazon Web Services Region. For more information about the available FIPS endpoints, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/kms.html#kms_region">Service endpoints</a> in the Key Management
 *  Service topic of the <i>Amazon Web Services General
 * 
 *  Reference</i>>
 * 
 *  All KMS API calls must be signed and be transmitted using Transport Layer Security (TLS). KMS recommends you always use
 *  the latest supported TLS version. Clients must also support cipher suites with Perfect Forward Secrecy (PFS) such as
 *  Ephemeral Diffie-Hellman (DHE) or Elliptic Curve Ephemeral Diffie-Hellman (ECDHE). Most modern systems such as Java 7
 *  and later support these
 * 
 *  modes>
 * 
 *  <b>Signing Requests</b>
 * 
 *  </p
 * 
 *  Requests must be signed by using an access key ID and a secret access key. We strongly recommend that you <i>do not</i>
 *  use your Amazon Web Services account (root) access key ID and secret key for everyday work with KMS. Instead, use the
 *  access key ID and secret access key for an IAM user. You can also use the Amazon Web Services Security Token Service to
 *  generate temporary security credentials that you can use to sign
 * 
 *  requests>
 * 
 *  All KMS operations require <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
 *  Version
 * 
 *  4</a>>
 * 
 *  <b>Logging API Requests</b>
 * 
 *  </p
 * 
 *  KMS supports CloudTrail, a service that logs Amazon Web Services API calls and related events for your Amazon Web
 *  Services account and delivers them to an Amazon S3 bucket that you specify. By using the information collected by
 *  CloudTrail, you can determine what requests were made to KMS, who made the request, when it was made, and so on. To
 *  learn more about CloudTrail, including how to turn it on and find your log files, see the <a
 *  href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/">CloudTrail User
 * 
 *  Guide</a>>
 * 
 *  <b>Additional Resources</b>
 * 
 *  </p
 * 
 *  For more information about credentials and request signing, see the
 * 
 *  following> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/general/latest/gr/aws-security-credentials.html">Amazon Web Services Security
 *  Credentials</a> - This topic provides general information about the types of credentials used to access Amazon Web
 * 
 *  Services> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security Credentials</a> -
 *  This section of the <i>IAM User Guide</i> describes how to create and use temporary security
 * 
 *  credentials> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a>
 *  - This set of topics walks you through the process of signing a request using an access key ID and a secret access
 * 
 *  key> </li> </ul>
 * 
 *  <b>Commonly Used API Operations</b>
 * 
 *  </p
 * 
 *  Of the API operations discussed in this guide, the following will prove the most useful for most applications. You will
 *  likely perform operations other than these, such as creating keys and assigning policies, by using the
 * 
 *  console> <ul> <li>
 * 
 *  <a>Encrypt</a>
 * 
 *  </p </li> <li>
 * 
 *  <a>Decrypt</a>
 * 
 *  </p </li> <li>
 * 
 *  <a>GenerateDataKey</a>
 * 
 *  </p </li> <li>
 * 
 *  <a>GenerateDataKeyWithoutPlaintext</a>
 *
 * \sa KmsClient::deleteImportedKeyMaterial
 */

/*!
 * Constructs a DeleteImportedKeyMaterialResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteImportedKeyMaterialResponse::DeleteImportedKeyMaterialResponse(
        const DeleteImportedKeyMaterialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KmsResponse(new DeleteImportedKeyMaterialResponsePrivate(this), parent)
{
    setRequest(new DeleteImportedKeyMaterialRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteImportedKeyMaterialRequest * DeleteImportedKeyMaterialResponse::request() const
{
    Q_D(const DeleteImportedKeyMaterialResponse);
    return static_cast<const DeleteImportedKeyMaterialRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kms DeleteImportedKeyMaterial \a response.
 */
void DeleteImportedKeyMaterialResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteImportedKeyMaterialResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kms::DeleteImportedKeyMaterialResponsePrivate
 * \brief The DeleteImportedKeyMaterialResponsePrivate class provides private implementation for DeleteImportedKeyMaterialResponse.
 * \internal
 *
 * \inmodule QtAwsKms
 */

/*!
 * Constructs a DeleteImportedKeyMaterialResponsePrivate object with public implementation \a q.
 */
DeleteImportedKeyMaterialResponsePrivate::DeleteImportedKeyMaterialResponsePrivate(
    DeleteImportedKeyMaterialResponse * const q) : KmsResponsePrivate(q)
{

}

/*!
 * Parses a Kms DeleteImportedKeyMaterial response element from \a xml.
 */
void DeleteImportedKeyMaterialResponsePrivate::parseDeleteImportedKeyMaterialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteImportedKeyMaterialResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kms
} // namespace QtAws

/*
    Copyright 2013-2020 Paul Colby

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

#include "importkeymaterialrequest.h"
#include "importkeymaterialrequest_p.h"
#include "importkeymaterialresponse.h"
#include "kmsrequest_p.h"

namespace QtAws {
namespace KMS {

/*!
 * \class QtAws::KMS::ImportKeyMaterialRequest
 * \brief The ImportKeyMaterialRequest class provides an interface for KMS ImportKeyMaterial requests.
 *
 * \inmodule QtAwsKMS
 *
 *  <fullname>AWS Key Management Service</fullname>
 * 
 *  AWS Key Management Service (AWS KMS) is an encryption and key management web service. This guide describes the AWS KMS
 *  operations that you can call programmatically. For general information about AWS KMS, see the <a
 *  href="https://docs.aws.amazon.com/kms/latest/developerguide/"> <i>AWS Key Management Service Developer Guide</i>
 * 
 *  </a>> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 *  .Net, macOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to AWS KMS and other AWS
 *  services. For example, the SDKs take care of tasks such as signing requests (see below), managing errors, and retrying
 *  requests automatically. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>> </note>
 * 
 *  We recommend that you use the AWS SDKs to make programmatic API calls to AWS
 * 
 *  KMS>
 * 
 *  Clients must support TLS (Transport Layer Security) 1.0. We recommend TLS 1.2. Clients must also support cipher suites
 *  with Perfect Forward Secrecy (PFS) such as Ephemeral Diffie-Hellman (DHE) or Elliptic Curve Ephemeral Diffie-Hellman
 *  (ECDHE). Most modern systems such as Java 7 and later support these
 * 
 *  modes>
 * 
 *  <b>Signing Requests</b>
 * 
 *  </p
 * 
 *  Requests must be signed by using an access key ID and a secret access key. We strongly recommend that you <i>do not</i>
 *  use your AWS account (root) access key ID and secret key for everyday work with AWS KMS. Instead, use the access key ID
 *  and secret access key for an IAM user. You can also use the AWS Security Token Service to generate temporary security
 *  credentials that you can use to sign
 * 
 *  requests>
 * 
 *  All AWS KMS operations require <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version
 * 
 *  4</a>>
 * 
 *  <b>Logging API Requests</b>
 * 
 *  </p
 * 
 *  AWS KMS supports AWS CloudTrail, a service that logs AWS API calls and related events for your AWS account and delivers
 *  them to an Amazon S3 bucket that you specify. By using the information collected by CloudTrail, you can determine what
 *  requests were made to AWS KMS, who made the request, when it was made, and so on. To learn more about CloudTrail,
 *  including how to turn it on and find your log files, see the <a
 *  href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/">AWS CloudTrail User
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
 *  <a href="https://docs.aws.amazon.com/general/latest/gr/aws-security-credentials.html">AWS Security Credentials</a> -
 *  This topic provides general information about the types of credentials used for accessing
 * 
 *  AWS> </li> <li>
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
 * \sa KmsClient::importKeyMaterial
 */

/*!
 * Constructs a copy of \a other.
 */
ImportKeyMaterialRequest::ImportKeyMaterialRequest(const ImportKeyMaterialRequest &other)
    : KmsRequest(new ImportKeyMaterialRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportKeyMaterialRequest object.
 */
ImportKeyMaterialRequest::ImportKeyMaterialRequest()
    : KmsRequest(new ImportKeyMaterialRequestPrivate(KmsRequest::ImportKeyMaterialAction, this))
{

}

/*!
 * \reimp
 */
bool ImportKeyMaterialRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportKeyMaterialResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportKeyMaterialRequest::response(QNetworkReply * const reply) const
{
    return new ImportKeyMaterialResponse(*this, reply);
}

/*!
 * \class QtAws::KMS::ImportKeyMaterialRequestPrivate
 * \brief The ImportKeyMaterialRequestPrivate class provides private implementation for ImportKeyMaterialRequest.
 * \internal
 *
 * \inmodule QtAwsKMS
 */

/*!
 * Constructs a ImportKeyMaterialRequestPrivate object for Kms \a action,
 * with public implementation \a q.
 */
ImportKeyMaterialRequestPrivate::ImportKeyMaterialRequestPrivate(
    const KmsRequest::Action action, ImportKeyMaterialRequest * const q)
    : KmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportKeyMaterialRequest
 * class' copy constructor.
 */
ImportKeyMaterialRequestPrivate::ImportKeyMaterialRequestPrivate(
    const ImportKeyMaterialRequestPrivate &other, ImportKeyMaterialRequest * const q)
    : KmsRequestPrivate(other, q)
{

}

} // namespace KMS
} // namespace QtAws

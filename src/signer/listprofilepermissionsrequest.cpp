// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprofilepermissionsrequest.h"
#include "listprofilepermissionsrequest_p.h"
#include "listprofilepermissionsresponse.h"
#include "signerrequest_p.h"

namespace QtAws {
namespace Signer {

/*!
 * \class QtAws::Signer::ListProfilePermissionsRequest
 * \brief The ListProfilePermissionsRequest class provides an interface for Signer ListProfilePermissions requests.
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
 * \sa SignerClient::listProfilePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
ListProfilePermissionsRequest::ListProfilePermissionsRequest(const ListProfilePermissionsRequest &other)
    : SignerRequest(new ListProfilePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProfilePermissionsRequest object.
 */
ListProfilePermissionsRequest::ListProfilePermissionsRequest()
    : SignerRequest(new ListProfilePermissionsRequestPrivate(SignerRequest::ListProfilePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProfilePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProfilePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProfilePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new ListProfilePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::Signer::ListProfilePermissionsRequestPrivate
 * \brief The ListProfilePermissionsRequestPrivate class provides private implementation for ListProfilePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsSigner
 */

/*!
 * Constructs a ListProfilePermissionsRequestPrivate object for Signer \a action,
 * with public implementation \a q.
 */
ListProfilePermissionsRequestPrivate::ListProfilePermissionsRequestPrivate(
    const SignerRequest::Action action, ListProfilePermissionsRequest * const q)
    : SignerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProfilePermissionsRequest
 * class' copy constructor.
 */
ListProfilePermissionsRequestPrivate::ListProfilePermissionsRequestPrivate(
    const ListProfilePermissionsRequestPrivate &other, ListProfilePermissionsRequest * const q)
    : SignerRequestPrivate(other, q)
{

}

} // namespace Signer
} // namespace QtAws

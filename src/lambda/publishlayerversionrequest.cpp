// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "publishlayerversionrequest.h"
#include "publishlayerversionrequest_p.h"
#include "publishlayerversionresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::PublishLayerVersionRequest
 * \brief The PublishLayerVersionRequest class provides an interface for Lambda PublishLayerVersion requests.
 *
 * \inmodule QtAwsLambda
 *
 *  <fullname>Lambda</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  Lambda is a compute service that lets you run code without provisioning or managing servers. Lambda runs your code on a
 *  high-availability compute infrastructure and performs all of the administration of the compute resources, including
 *  server and operating system maintenance, capacity provisioning and automatic scaling, code monitoring and logging. With
 *  Lambda, you can run code for virtually any type of application or backend service. For more information about the Lambda
 *  service, see <a href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is Lambda</a> in the <b>Lambda
 *  Developer
 * 
 *  Guide</b>>
 * 
 *  The <i>Lambda API Reference</i> provides information about each of the API methods, including details about the
 *  parameters in each API request and response.
 * 
 *  </p
 * 
 *  </p
 * 
 *  You can use Software Development Kits (SDKs), Integrated Development Environment (IDE) Toolkits, and command line tools
 *  to access the API. For installation instructions, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *  Services</a>.
 * 
 *  </p
 * 
 *  For a list of Region-specific endpoints that Lambda supports, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/lambda-service.html/">Lambda endpoints and quotas </a> in the
 *  <i>Amazon Web Services General Reference.</i>.
 * 
 *  </p
 * 
 *  When making the API calls, you will need to authenticate your request by providing a signature. Lambda supports
 *  signature version 4. For more information, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 signing process</a> in
 *  the <i>Amazon Web Services General Reference.</i>.
 * 
 *  </p
 * 
 *  <b>CA certificates</b>
 * 
 *  </p
 * 
 *  Because Amazon Web Services SDKs use the CA certificates from your computer, changes to the certificates on the Amazon
 *  Web Services servers can cause connection failures when you attempt to use an SDK. You can prevent these failures by
 *  keeping your computer's CA certificates and operating system up-to-date. If you encounter this issue in a corporate
 *  environment and do not manage your own computer, you might need to ask an administrator to assist with the update
 *  process. The following list shows minimum operating system and Java
 * 
 *  versions> <ul> <li>
 * 
 *  Microsoft Windows versions that have updates from January 2005 or later installed contain at least one of the required
 *  CAs in their trust list.
 * 
 *  </p </li> <li>
 * 
 *  Mac OS X 10.4 with Java for Mac OS X 10.4 Release 5 (February 2007), Mac OS X 10.5 (October 2007), and later versions
 *  contain at least one of the required CAs in their trust list.
 * 
 *  </p </li> <li>
 * 
 *  Red Hat Enterprise Linux 5 (March 2007), 6, and 7 and CentOS 5, 6, and 7 all contain at least one of the required CAs in
 *  their default trusted CA list.
 * 
 *  </p </li> <li>
 * 
 *  Java 1.4.2_12 (May 2006), 5 Update 2 (March 2005), and all later versions, including Java 6 (December 2006), 7, and 8,
 *  contain at least one of the required CAs in their default trusted CA list.
 * 
 *  </p </li> </ul>
 * 
 *  When accessing the Lambda management console or Lambda API endpoints, whether through browsers or programmatically, you
 *  will need to ensure your client machines support any of the following CAs:
 * 
 *  </p <ul> <li>
 * 
 *  Amazon Root CA
 * 
 *  > </li> <li>
 * 
 *  Starfield Services Root Certificate Authority -
 * 
 *  G> </li> <li>
 * 
 *  Starfield Class 2 Certification
 * 
 *  Authorit> </li> </ul>
 * 
 *  Root certificates from the first two authorities are available from <a
 *  href="https://www.amazontrust.com/repository/">Amazon trust services</a>, but keeping your computer up-to-date is the
 *  more straightforward solution. To learn more about ACM-provided certificates, see <a
 *  href="http://aws.amazon.com/certificate-manager/faqs/#certificates">Amazon Web Services Certificate Manager FAQs.</a>
 *
 * \sa LambdaClient::publishLayerVersion
 */

/*!
 * Constructs a copy of \a other.
 */
PublishLayerVersionRequest::PublishLayerVersionRequest(const PublishLayerVersionRequest &other)
    : LambdaRequest(new PublishLayerVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PublishLayerVersionRequest object.
 */
PublishLayerVersionRequest::PublishLayerVersionRequest()
    : LambdaRequest(new PublishLayerVersionRequestPrivate(LambdaRequest::PublishLayerVersionAction, this))
{

}

/*!
 * \reimp
 */
bool PublishLayerVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PublishLayerVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PublishLayerVersionRequest::response(QNetworkReply * const reply) const
{
    return new PublishLayerVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Lambda::PublishLayerVersionRequestPrivate
 * \brief The PublishLayerVersionRequestPrivate class provides private implementation for PublishLayerVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a PublishLayerVersionRequestPrivate object for Lambda \a action,
 * with public implementation \a q.
 */
PublishLayerVersionRequestPrivate::PublishLayerVersionRequestPrivate(
    const LambdaRequest::Action action, PublishLayerVersionRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PublishLayerVersionRequest
 * class' copy constructor.
 */
PublishLayerVersionRequestPrivate::PublishLayerVersionRequestPrivate(
    const PublishLayerVersionRequestPrivate &other, PublishLayerVersionRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws

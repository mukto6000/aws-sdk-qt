// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinventorydeletionsrequest.h"
#include "describeinventorydeletionsrequest_p.h"
#include "describeinventorydeletionsresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::DescribeInventoryDeletionsRequest
 * \brief The DescribeInventoryDeletionsRequest class provides an interface for Ssm DescribeInventoryDeletions requests.
 *
 * \inmodule QtAwsSsm
 *
 *  Amazon Web Services Systems Manager is a collection of capabilities to help you manage your applications and
 *  infrastructure running in the Amazon Web Services Cloud;. Systems Manager simplifies application and resource
 *  management, shortens the time to detect and resolve operational problems, and helps you manage your Amazon Web Services
 *  resources securely at
 * 
 *  scale>
 * 
 *  This reference is intended to be used with the <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">Amazon Web Services Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites. For more information, see <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting up Amazon
 *  Web Services Systems
 * 
 *  Manager</a>> <p class="title"> <b>Related resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  For information about how to use a Query API, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API requests</a>.
 * 
 *  </p </li> <li>
 * 
 *  For information about other API operations you can perform on EC2 instances, see the <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AppConfig, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AppConfig User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AppConfig API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about Incident Manager, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">Incident Manager User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">Incident Manager API
 *
 * \sa SsmClient::describeInventoryDeletions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInventoryDeletionsRequest::DescribeInventoryDeletionsRequest(const DescribeInventoryDeletionsRequest &other)
    : SsmRequest(new DescribeInventoryDeletionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInventoryDeletionsRequest object.
 */
DescribeInventoryDeletionsRequest::DescribeInventoryDeletionsRequest()
    : SsmRequest(new DescribeInventoryDeletionsRequestPrivate(SsmRequest::DescribeInventoryDeletionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInventoryDeletionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInventoryDeletionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInventoryDeletionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInventoryDeletionsResponse(*this, reply);
}

/*!
 * \class QtAws::Ssm::DescribeInventoryDeletionsRequestPrivate
 * \brief The DescribeInventoryDeletionsRequestPrivate class provides private implementation for DescribeInventoryDeletionsRequest.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a DescribeInventoryDeletionsRequestPrivate object for Ssm \a action,
 * with public implementation \a q.
 */
DescribeInventoryDeletionsRequestPrivate::DescribeInventoryDeletionsRequestPrivate(
    const SsmRequest::Action action, DescribeInventoryDeletionsRequest * const q)
    : SsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInventoryDeletionsRequest
 * class' copy constructor.
 */
DescribeInventoryDeletionsRequestPrivate::DescribeInventoryDeletionsRequestPrivate(
    const DescribeInventoryDeletionsRequestPrivate &other, DescribeInventoryDeletionsRequest * const q)
    : SsmRequestPrivate(other, q)
{

}

} // namespace Ssm
} // namespace QtAws

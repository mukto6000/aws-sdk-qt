// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedomainrequest.h"
#include "describedomainrequest_p.h"
#include "describedomainresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::DescribeDomainRequest
 * \brief The DescribeDomainRequest class provides an interface for Swf DescribeDomain requests.
 *
 * \inmodule QtAwsSwf
 *
 *  <fullname>Amazon Simple Workflow Service</fullname>
 * 
 *  The Amazon Simple Workflow Service (Amazon SWF) makes it easy to build applications that use Amazon's cloud to
 *  coordinate work across distributed components. In Amazon SWF, a <i>task</i> represents a logical unit of work that is
 *  performed by a component of your workflow. Coordinating tasks in a workflow involves managing intertask dependencies,
 *  scheduling, and concurrency in accordance with the logical flow of the
 * 
 *  application>
 * 
 *  Amazon SWF gives you full control over implementing tasks and coordinating them without worrying about underlying
 *  complexities such as tracking their progress and maintaining their
 * 
 *  state>
 * 
 *  This documentation serves as reference only. For a broader overview of the Amazon SWF programming model, see the <i> <a
 *  href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SwfClient::describeDomain
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDomainRequest::DescribeDomainRequest(const DescribeDomainRequest &other)
    : SwfRequest(new DescribeDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDomainRequest object.
 */
DescribeDomainRequest::DescribeDomainRequest()
    : SwfRequest(new DescribeDomainRequestPrivate(SwfRequest::DescribeDomainAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDomainRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDomainResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::DescribeDomainRequestPrivate
 * \brief The DescribeDomainRequestPrivate class provides private implementation for DescribeDomainRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a DescribeDomainRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
DescribeDomainRequestPrivate::DescribeDomainRequestPrivate(
    const SwfRequest::Action action, DescribeDomainRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDomainRequest
 * class' copy constructor.
 */
DescribeDomainRequestPrivate::DescribeDomainRequestPrivate(
    const DescribeDomainRequestPrivate &other, DescribeDomainRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws

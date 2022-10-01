// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registeractivitytyperequest.h"
#include "registeractivitytyperequest_p.h"
#include "registeractivitytyperesponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::RegisterActivityTypeRequest
 * \brief The RegisterActivityTypeRequest class provides an interface for Swf RegisterActivityType requests.
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
 * \sa SwfClient::registerActivityType
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterActivityTypeRequest::RegisterActivityTypeRequest(const RegisterActivityTypeRequest &other)
    : SwfRequest(new RegisterActivityTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterActivityTypeRequest object.
 */
RegisterActivityTypeRequest::RegisterActivityTypeRequest()
    : SwfRequest(new RegisterActivityTypeRequestPrivate(SwfRequest::RegisterActivityTypeAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterActivityTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterActivityTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterActivityTypeRequest::response(QNetworkReply * const reply) const
{
    return new RegisterActivityTypeResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::RegisterActivityTypeRequestPrivate
 * \brief The RegisterActivityTypeRequestPrivate class provides private implementation for RegisterActivityTypeRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a RegisterActivityTypeRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
RegisterActivityTypeRequestPrivate::RegisterActivityTypeRequestPrivate(
    const SwfRequest::Action action, RegisterActivityTypeRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterActivityTypeRequest
 * class' copy constructor.
 */
RegisterActivityTypeRequestPrivate::RegisterActivityTypeRequestPrivate(
    const RegisterActivityTypeRequestPrivate &other, RegisterActivityTypeRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws

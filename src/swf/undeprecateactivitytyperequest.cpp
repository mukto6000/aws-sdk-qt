// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "undeprecateactivitytyperequest.h"
#include "undeprecateactivitytyperequest_p.h"
#include "undeprecateactivitytyperesponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::UndeprecateActivityTypeRequest
 * \brief The UndeprecateActivityTypeRequest class provides an interface for Swf UndeprecateActivityType requests.
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
 * \sa SwfClient::undeprecateActivityType
 */

/*!
 * Constructs a copy of \a other.
 */
UndeprecateActivityTypeRequest::UndeprecateActivityTypeRequest(const UndeprecateActivityTypeRequest &other)
    : SwfRequest(new UndeprecateActivityTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UndeprecateActivityTypeRequest object.
 */
UndeprecateActivityTypeRequest::UndeprecateActivityTypeRequest()
    : SwfRequest(new UndeprecateActivityTypeRequestPrivate(SwfRequest::UndeprecateActivityTypeAction, this))
{

}

/*!
 * \reimp
 */
bool UndeprecateActivityTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UndeprecateActivityTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UndeprecateActivityTypeRequest::response(QNetworkReply * const reply) const
{
    return new UndeprecateActivityTypeResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::UndeprecateActivityTypeRequestPrivate
 * \brief The UndeprecateActivityTypeRequestPrivate class provides private implementation for UndeprecateActivityTypeRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a UndeprecateActivityTypeRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
UndeprecateActivityTypeRequestPrivate::UndeprecateActivityTypeRequestPrivate(
    const SwfRequest::Action action, UndeprecateActivityTypeRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UndeprecateActivityTypeRequest
 * class' copy constructor.
 */
UndeprecateActivityTypeRequestPrivate::UndeprecateActivityTypeRequestPrivate(
    const UndeprecateActivityTypeRequestPrivate &other, UndeprecateActivityTypeRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws

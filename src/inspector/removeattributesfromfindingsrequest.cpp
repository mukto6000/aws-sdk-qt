// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeattributesfromfindingsrequest.h"
#include "removeattributesfromfindingsrequest_p.h"
#include "removeattributesfromfindingsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::RemoveAttributesFromFindingsRequest
 * \brief The RemoveAttributesFromFindingsRequest class provides an interface for Inspector RemoveAttributesFromFindings requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::removeAttributesFromFindings
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveAttributesFromFindingsRequest::RemoveAttributesFromFindingsRequest(const RemoveAttributesFromFindingsRequest &other)
    : InspectorRequest(new RemoveAttributesFromFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveAttributesFromFindingsRequest object.
 */
RemoveAttributesFromFindingsRequest::RemoveAttributesFromFindingsRequest()
    : InspectorRequest(new RemoveAttributesFromFindingsRequestPrivate(InspectorRequest::RemoveAttributesFromFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveAttributesFromFindingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveAttributesFromFindingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveAttributesFromFindingsRequest::response(QNetworkReply * const reply) const
{
    return new RemoveAttributesFromFindingsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::RemoveAttributesFromFindingsRequestPrivate
 * \brief The RemoveAttributesFromFindingsRequestPrivate class provides private implementation for RemoveAttributesFromFindingsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a RemoveAttributesFromFindingsRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
RemoveAttributesFromFindingsRequestPrivate::RemoveAttributesFromFindingsRequestPrivate(
    const InspectorRequest::Action action, RemoveAttributesFromFindingsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveAttributesFromFindingsRequest
 * class' copy constructor.
 */
RemoveAttributesFromFindingsRequestPrivate::RemoveAttributesFromFindingsRequestPrivate(
    const RemoveAttributesFromFindingsRequestPrivate &other, RemoveAttributesFromFindingsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws

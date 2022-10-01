// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagresourcerequest.h"
#include "untagresourcerequest_p.h"
#include "untagresourceresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::UntagResourceRequest
 * \brief The UntagResourceRequest class provides an interface for RoboMaker UntagResource requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::untagResource
 */

/*!
 * Constructs a copy of \a other.
 */
UntagResourceRequest::UntagResourceRequest(const UntagResourceRequest &other)
    : RoboMakerRequest(new UntagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagResourceRequest object.
 */
UntagResourceRequest::UntagResourceRequest()
    : RoboMakerRequest(new UntagResourceRequestPrivate(RoboMakerRequest::UntagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool UntagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagResourceRequest::response(QNetworkReply * const reply) const
{
    return new UntagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::UntagResourceRequestPrivate
 * \brief The UntagResourceRequestPrivate class provides private implementation for UntagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a UntagResourceRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const RoboMakerRequest::Action action, UntagResourceRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagResourceRequest
 * class' copy constructor.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const UntagResourceRequestPrivate &other, UntagResourceRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws

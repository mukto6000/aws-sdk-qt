// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgrouprequest.h"
#include "getgrouprequest_p.h"
#include "getgroupresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetGroupRequest
 * \brief The GetGroupRequest class provides an interface for Greengrass GetGroup requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getGroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetGroupRequest::GetGroupRequest(const GetGroupRequest &other)
    : GreengrassRequest(new GetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGroupRequest object.
 */
GetGroupRequest::GetGroupRequest()
    : GreengrassRequest(new GetGroupRequestPrivate(GreengrassRequest::GetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetGroupRequestPrivate
 * \brief The GetGroupRequestPrivate class provides private implementation for GetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetGroupRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetGroupRequestPrivate::GetGroupRequestPrivate(
    const GreengrassRequest::Action action, GetGroupRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGroupRequest
 * class' copy constructor.
 */
GetGroupRequestPrivate::GetGroupRequestPrivate(
    const GetGroupRequestPrivate &other, GetGroupRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws

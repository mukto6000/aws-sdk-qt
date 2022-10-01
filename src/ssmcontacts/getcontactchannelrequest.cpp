// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontactchannelrequest.h"
#include "getcontactchannelrequest_p.h"
#include "getcontactchannelresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::GetContactChannelRequest
 * \brief The GetContactChannelRequest class provides an interface for SsmContacts GetContactChannel requests.
 *
 * \inmodule QtAwsSsmContacts
 *
 *  Systems Manager Incident Manager is an incident management console designed to help users mitigate and recover from
 *  incidents affecting their Amazon Web Services-hosted applications. An incident is any unplanned interruption or
 *  reduction in quality of services.
 * 
 *  </p
 * 
 *  Incident Manager increases incident resolution by notifying responders of impact, highlighting relevant troubleshooting
 *  data, and providing collaboration tools to get services back up and running. To achieve the primary goal of reducing the
 *  time-to-resolution of critical incidents, Incident Manager automates response plans and enables responder team
 *  escalation.
 *
 * \sa SsmContactsClient::getContactChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetContactChannelRequest::GetContactChannelRequest(const GetContactChannelRequest &other)
    : SsmContactsRequest(new GetContactChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContactChannelRequest object.
 */
GetContactChannelRequest::GetContactChannelRequest()
    : SsmContactsRequest(new GetContactChannelRequestPrivate(SsmContactsRequest::GetContactChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetContactChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContactChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContactChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetContactChannelResponse(*this, reply);
}

/*!
 * \class QtAws::SsmContacts::GetContactChannelRequestPrivate
 * \brief The GetContactChannelRequestPrivate class provides private implementation for GetContactChannelRequest.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a GetContactChannelRequestPrivate object for SsmContacts \a action,
 * with public implementation \a q.
 */
GetContactChannelRequestPrivate::GetContactChannelRequestPrivate(
    const SsmContactsRequest::Action action, GetContactChannelRequest * const q)
    : SsmContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContactChannelRequest
 * class' copy constructor.
 */
GetContactChannelRequestPrivate::GetContactChannelRequestPrivate(
    const GetContactChannelRequestPrivate &other, GetContactChannelRequest * const q)
    : SsmContactsRequestPrivate(other, q)
{

}

} // namespace SsmContacts
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getprotocolslistrequest.h"
#include "getprotocolslistrequest_p.h"
#include "getprotocolslistresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::GetProtocolsListRequest
 * \brief The GetProtocolsListRequest class provides an interface for Fms GetProtocolsList requests.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::getProtocolsList
 */

/*!
 * Constructs a copy of \a other.
 */
GetProtocolsListRequest::GetProtocolsListRequest(const GetProtocolsListRequest &other)
    : FmsRequest(new GetProtocolsListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetProtocolsListRequest object.
 */
GetProtocolsListRequest::GetProtocolsListRequest()
    : FmsRequest(new GetProtocolsListRequestPrivate(FmsRequest::GetProtocolsListAction, this))
{

}

/*!
 * \reimp
 */
bool GetProtocolsListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetProtocolsListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetProtocolsListRequest::response(QNetworkReply * const reply) const
{
    return new GetProtocolsListResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::GetProtocolsListRequestPrivate
 * \brief The GetProtocolsListRequestPrivate class provides private implementation for GetProtocolsListRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a GetProtocolsListRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
GetProtocolsListRequestPrivate::GetProtocolsListRequestPrivate(
    const FmsRequest::Action action, GetProtocolsListRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetProtocolsListRequest
 * class' copy constructor.
 */
GetProtocolsListRequestPrivate::GetProtocolsListRequestPrivate(
    const GetProtocolsListRequestPrivate &other, GetProtocolsListRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws

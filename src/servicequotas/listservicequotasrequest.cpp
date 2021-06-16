/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listservicequotasrequest.h"
#include "listservicequotasrequest_p.h"
#include "listservicequotasresponse.h"
#include "servicequotasrequest_p.h"

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::ListServiceQuotasRequest
 * \brief The ListServiceQuotasRequest class provides an interface for ServiceQuotas ListServiceQuotas requests.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::listServiceQuotas
 */

/*!
 * Constructs a copy of \a other.
 */
ListServiceQuotasRequest::ListServiceQuotasRequest(const ListServiceQuotasRequest &other)
    : ServiceQuotasRequest(new ListServiceQuotasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListServiceQuotasRequest object.
 */
ListServiceQuotasRequest::ListServiceQuotasRequest()
    : ServiceQuotasRequest(new ListServiceQuotasRequestPrivate(ServiceQuotasRequest::ListServiceQuotasAction, this))
{

}

/*!
 * \reimp
 */
bool ListServiceQuotasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListServiceQuotasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListServiceQuotasRequest::response(QNetworkReply * const reply) const
{
    return new ListServiceQuotasResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceQuotas::ListServiceQuotasRequestPrivate
 * \brief The ListServiceQuotasRequestPrivate class provides private implementation for ListServiceQuotasRequest.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a ListServiceQuotasRequestPrivate object for ServiceQuotas \a action,
 * with public implementation \a q.
 */
ListServiceQuotasRequestPrivate::ListServiceQuotasRequestPrivate(
    const ServiceQuotasRequest::Action action, ListServiceQuotasRequest * const q)
    : ServiceQuotasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListServiceQuotasRequest
 * class' copy constructor.
 */
ListServiceQuotasRequestPrivate::ListServiceQuotasRequestPrivate(
    const ListServiceQuotasRequestPrivate &other, ListServiceQuotasRequest * const q)
    : ServiceQuotasRequestPrivate(other, q)
{

}

} // namespace ServiceQuotas
} // namespace QtAws

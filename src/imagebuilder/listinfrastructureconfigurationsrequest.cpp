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

#include "listinfrastructureconfigurationsrequest.h"
#include "listinfrastructureconfigurationsrequest_p.h"
#include "listinfrastructureconfigurationsresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListInfrastructureConfigurationsRequest
 * \brief The ListInfrastructureConfigurationsRequest class provides an interface for ImageBuilder ListInfrastructureConfigurations requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listInfrastructureConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListInfrastructureConfigurationsRequest::ListInfrastructureConfigurationsRequest(const ListInfrastructureConfigurationsRequest &other)
    : ImageBuilderRequest(new ListInfrastructureConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInfrastructureConfigurationsRequest object.
 */
ListInfrastructureConfigurationsRequest::ListInfrastructureConfigurationsRequest()
    : ImageBuilderRequest(new ListInfrastructureConfigurationsRequestPrivate(ImageBuilderRequest::ListInfrastructureConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInfrastructureConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInfrastructureConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInfrastructureConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListInfrastructureConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::ListInfrastructureConfigurationsRequestPrivate
 * \brief The ListInfrastructureConfigurationsRequestPrivate class provides private implementation for ListInfrastructureConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListInfrastructureConfigurationsRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
ListInfrastructureConfigurationsRequestPrivate::ListInfrastructureConfigurationsRequestPrivate(
    const ImageBuilderRequest::Action action, ListInfrastructureConfigurationsRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInfrastructureConfigurationsRequest
 * class' copy constructor.
 */
ListInfrastructureConfigurationsRequestPrivate::ListInfrastructureConfigurationsRequestPrivate(
    const ListInfrastructureConfigurationsRequestPrivate &other, ListInfrastructureConfigurationsRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws

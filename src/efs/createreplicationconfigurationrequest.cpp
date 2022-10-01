// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreplicationconfigurationrequest.h"
#include "createreplicationconfigurationrequest_p.h"
#include "createreplicationconfigurationresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::CreateReplicationConfigurationRequest
 * \brief The CreateReplicationConfigurationRequest class provides an interface for Efs CreateReplicationConfiguration requests.
 *
 * \inmodule QtAwsEfs
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 Linux and Mac
 *  instances in the Amazon Web Services Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking
 *  automatically as you add and remove files, so that your applications have the storage they need, when they need it. For
 *  more information, see the <a href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File
 *  System API Reference</a> and the <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File
 *  System User
 *
 * \sa EfsClient::createReplicationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateReplicationConfigurationRequest::CreateReplicationConfigurationRequest(const CreateReplicationConfigurationRequest &other)
    : EfsRequest(new CreateReplicationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateReplicationConfigurationRequest object.
 */
CreateReplicationConfigurationRequest::CreateReplicationConfigurationRequest()
    : EfsRequest(new CreateReplicationConfigurationRequestPrivate(EfsRequest::CreateReplicationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateReplicationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateReplicationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateReplicationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateReplicationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Efs::CreateReplicationConfigurationRequestPrivate
 * \brief The CreateReplicationConfigurationRequestPrivate class provides private implementation for CreateReplicationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a CreateReplicationConfigurationRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
CreateReplicationConfigurationRequestPrivate::CreateReplicationConfigurationRequestPrivate(
    const EfsRequest::Action action, CreateReplicationConfigurationRequest * const q)
    : EfsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateReplicationConfigurationRequest
 * class' copy constructor.
 */
CreateReplicationConfigurationRequestPrivate::CreateReplicationConfigurationRequestPrivate(
    const CreateReplicationConfigurationRequestPrivate &other, CreateReplicationConfigurationRequest * const q)
    : EfsRequestPrivate(other, q)
{

}

} // namespace Efs
} // namespace QtAws

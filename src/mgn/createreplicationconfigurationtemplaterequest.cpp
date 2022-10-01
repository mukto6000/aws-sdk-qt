// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreplicationconfigurationtemplaterequest.h"
#include "createreplicationconfigurationtemplaterequest_p.h"
#include "createreplicationconfigurationtemplateresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::CreateReplicationConfigurationTemplateRequest
 * \brief The CreateReplicationConfigurationTemplateRequest class provides an interface for Mgn CreateReplicationConfigurationTemplate requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::createReplicationConfigurationTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateReplicationConfigurationTemplateRequest::CreateReplicationConfigurationTemplateRequest(const CreateReplicationConfigurationTemplateRequest &other)
    : MgnRequest(new CreateReplicationConfigurationTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateReplicationConfigurationTemplateRequest object.
 */
CreateReplicationConfigurationTemplateRequest::CreateReplicationConfigurationTemplateRequest()
    : MgnRequest(new CreateReplicationConfigurationTemplateRequestPrivate(MgnRequest::CreateReplicationConfigurationTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateReplicationConfigurationTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateReplicationConfigurationTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateReplicationConfigurationTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateReplicationConfigurationTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::CreateReplicationConfigurationTemplateRequestPrivate
 * \brief The CreateReplicationConfigurationTemplateRequestPrivate class provides private implementation for CreateReplicationConfigurationTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a CreateReplicationConfigurationTemplateRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
CreateReplicationConfigurationTemplateRequestPrivate::CreateReplicationConfigurationTemplateRequestPrivate(
    const MgnRequest::Action action, CreateReplicationConfigurationTemplateRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateReplicationConfigurationTemplateRequest
 * class' copy constructor.
 */
CreateReplicationConfigurationTemplateRequestPrivate::CreateReplicationConfigurationTemplateRequestPrivate(
    const CreateReplicationConfigurationTemplateRequestPrivate &other, CreateReplicationConfigurationTemplateRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws

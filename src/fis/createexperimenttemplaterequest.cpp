// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createexperimenttemplaterequest.h"
#include "createexperimenttemplaterequest_p.h"
#include "createexperimenttemplateresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::CreateExperimentTemplateRequest
 * \brief The CreateExperimentTemplateRequest class provides an interface for Fis CreateExperimentTemplate requests.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::createExperimentTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateExperimentTemplateRequest::CreateExperimentTemplateRequest(const CreateExperimentTemplateRequest &other)
    : FisRequest(new CreateExperimentTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateExperimentTemplateRequest object.
 */
CreateExperimentTemplateRequest::CreateExperimentTemplateRequest()
    : FisRequest(new CreateExperimentTemplateRequestPrivate(FisRequest::CreateExperimentTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateExperimentTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateExperimentTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateExperimentTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateExperimentTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Fis::CreateExperimentTemplateRequestPrivate
 * \brief The CreateExperimentTemplateRequestPrivate class provides private implementation for CreateExperimentTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a CreateExperimentTemplateRequestPrivate object for Fis \a action,
 * with public implementation \a q.
 */
CreateExperimentTemplateRequestPrivate::CreateExperimentTemplateRequestPrivate(
    const FisRequest::Action action, CreateExperimentTemplateRequest * const q)
    : FisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateExperimentTemplateRequest
 * class' copy constructor.
 */
CreateExperimentTemplateRequestPrivate::CreateExperimentTemplateRequestPrivate(
    const CreateExperimentTemplateRequestPrivate &other, CreateExperimentTemplateRequest * const q)
    : FisRequestPrivate(other, q)
{

}

} // namespace Fis
} // namespace QtAws

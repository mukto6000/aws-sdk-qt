// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createassociationresponse.h"
#include "createassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::CreateAssociationResponse
 * \brief The CreateAssociationResponse class provides an interace for Ssm CreateAssociation responses.
 *
 * \inmodule QtAwsSsm
 *
 *  Amazon Web Services Systems Manager is a collection of capabilities to help you manage your applications and
 *  infrastructure running in the Amazon Web Services Cloud;. Systems Manager simplifies application and resource
 *  management, shortens the time to detect and resolve operational problems, and helps you manage your Amazon Web Services
 *  resources securely at
 * 
 *  scale>
 * 
 *  This reference is intended to be used with the <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">Amazon Web Services Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites. For more information, see <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting up Amazon
 *  Web Services Systems
 * 
 *  Manager</a>> <p class="title"> <b>Related resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  For information about how to use a Query API, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API requests</a>.
 * 
 *  </p </li> <li>
 * 
 *  For information about other API operations you can perform on EC2 instances, see the <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AppConfig, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AppConfig User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AppConfig API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about Incident Manager, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">Incident Manager User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">Incident Manager API
 *
 * \sa SsmClient::createAssociation
 */

/*!
 * Constructs a CreateAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAssociationResponse::CreateAssociationResponse(
        const CreateAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmResponse(new CreateAssociationResponsePrivate(this), parent)
{
    setRequest(new CreateAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAssociationRequest * CreateAssociationResponse::request() const
{
    Q_D(const CreateAssociationResponse);
    return static_cast<const CreateAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ssm CreateAssociation \a response.
 */
void CreateAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ssm::CreateAssociationResponsePrivate
 * \brief The CreateAssociationResponsePrivate class provides private implementation for CreateAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a CreateAssociationResponsePrivate object with public implementation \a q.
 */
CreateAssociationResponsePrivate::CreateAssociationResponsePrivate(
    CreateAssociationResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a Ssm CreateAssociation response element from \a xml.
 */
void CreateAssociationResponsePrivate::parseCreateAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ssm
} // namespace QtAws

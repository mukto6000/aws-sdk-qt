// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteactivationresponse.h"
#include "deleteactivationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::DeleteActivationResponse
 * \brief The DeleteActivationResponse class provides an interace for Ssm DeleteActivation responses.
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
 * \sa SsmClient::deleteActivation
 */

/*!
 * Constructs a DeleteActivationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteActivationResponse::DeleteActivationResponse(
        const DeleteActivationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmResponse(new DeleteActivationResponsePrivate(this), parent)
{
    setRequest(new DeleteActivationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteActivationRequest * DeleteActivationResponse::request() const
{
    Q_D(const DeleteActivationResponse);
    return static_cast<const DeleteActivationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ssm DeleteActivation \a response.
 */
void DeleteActivationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteActivationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ssm::DeleteActivationResponsePrivate
 * \brief The DeleteActivationResponsePrivate class provides private implementation for DeleteActivationResponse.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a DeleteActivationResponsePrivate object with public implementation \a q.
 */
DeleteActivationResponsePrivate::DeleteActivationResponsePrivate(
    DeleteActivationResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a Ssm DeleteActivation response element from \a xml.
 */
void DeleteActivationResponsePrivate::parseDeleteActivationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteActivationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ssm
} // namespace QtAws

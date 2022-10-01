// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemaintenancewindowtargetresponse.h"
#include "updatemaintenancewindowtargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::UpdateMaintenanceWindowTargetResponse
 * \brief The UpdateMaintenanceWindowTargetResponse class provides an interace for Ssm UpdateMaintenanceWindowTarget responses.
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
 * \sa SsmClient::updateMaintenanceWindowTarget
 */

/*!
 * Constructs a UpdateMaintenanceWindowTargetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMaintenanceWindowTargetResponse::UpdateMaintenanceWindowTargetResponse(
        const UpdateMaintenanceWindowTargetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmResponse(new UpdateMaintenanceWindowTargetResponsePrivate(this), parent)
{
    setRequest(new UpdateMaintenanceWindowTargetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMaintenanceWindowTargetRequest * UpdateMaintenanceWindowTargetResponse::request() const
{
    Q_D(const UpdateMaintenanceWindowTargetResponse);
    return static_cast<const UpdateMaintenanceWindowTargetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ssm UpdateMaintenanceWindowTarget \a response.
 */
void UpdateMaintenanceWindowTargetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMaintenanceWindowTargetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ssm::UpdateMaintenanceWindowTargetResponsePrivate
 * \brief The UpdateMaintenanceWindowTargetResponsePrivate class provides private implementation for UpdateMaintenanceWindowTargetResponse.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a UpdateMaintenanceWindowTargetResponsePrivate object with public implementation \a q.
 */
UpdateMaintenanceWindowTargetResponsePrivate::UpdateMaintenanceWindowTargetResponsePrivate(
    UpdateMaintenanceWindowTargetResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a Ssm UpdateMaintenanceWindowTarget response element from \a xml.
 */
void UpdateMaintenanceWindowTargetResponsePrivate::parseUpdateMaintenanceWindowTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMaintenanceWindowTargetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ssm
} // namespace QtAws

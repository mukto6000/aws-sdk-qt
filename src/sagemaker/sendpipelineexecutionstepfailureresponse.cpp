// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendpipelineexecutionstepfailureresponse.h"
#include "sendpipelineexecutionstepfailureresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::SendPipelineExecutionStepFailureResponse
 * \brief The SendPipelineExecutionStepFailureResponse class provides an interace for SageMaker SendPipelineExecutionStepFailure responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::sendPipelineExecutionStepFailure
 */

/*!
 * Constructs a SendPipelineExecutionStepFailureResponse object for \a reply to \a request, with parent \a parent.
 */
SendPipelineExecutionStepFailureResponse::SendPipelineExecutionStepFailureResponse(
        const SendPipelineExecutionStepFailureRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new SendPipelineExecutionStepFailureResponsePrivate(this), parent)
{
    setRequest(new SendPipelineExecutionStepFailureRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendPipelineExecutionStepFailureRequest * SendPipelineExecutionStepFailureResponse::request() const
{
    Q_D(const SendPipelineExecutionStepFailureResponse);
    return static_cast<const SendPipelineExecutionStepFailureRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker SendPipelineExecutionStepFailure \a response.
 */
void SendPipelineExecutionStepFailureResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendPipelineExecutionStepFailureResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::SendPipelineExecutionStepFailureResponsePrivate
 * \brief The SendPipelineExecutionStepFailureResponsePrivate class provides private implementation for SendPipelineExecutionStepFailureResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a SendPipelineExecutionStepFailureResponsePrivate object with public implementation \a q.
 */
SendPipelineExecutionStepFailureResponsePrivate::SendPipelineExecutionStepFailureResponsePrivate(
    SendPipelineExecutionStepFailureResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker SendPipelineExecutionStepFailure response element from \a xml.
 */
void SendPipelineExecutionStepFailureResponsePrivate::parseSendPipelineExecutionStepFailureResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendPipelineExecutionStepFailureResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
